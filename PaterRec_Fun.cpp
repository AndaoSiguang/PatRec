#include "PaterRec_Fun.h"


PaterRec_Fun::PaterRec_Fun(QWidget* parent)
    : QMainWindow(parent)
{

    

}


//������ļ�֮���յ��źŵ��õĲۺ���
void PaterRec_Fun::getFileImgName() {
    emit getImgUrl();
}

void PaterRec_Fun::outPutRec(bool isChecked[]) {

    Mat img = fileImgCopy.clone();
    Mat imgGray, imgBlur, imgCanny, kernel, imgDil;

    string objectType;

    vector<vector<Point>> contours;
    
    
    vector<Vec4i> hierarchy;

    

    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    GaussianBlur(imgGray, imgBlur, Size(3, 3), 3, 0);
    Canny(imgBlur, imgCanny, 25, 75);
    kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
    dilate(imgCanny, imgDil, kernel);

    findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);



    for (int i = 0; i < contours.size(); i++)
    {
        int area = contourArea(contours[i]);

        vector<vector<Point>> conPoly(contours.size());
        vector<Rect> boundRect(contours.size());

        if (area >  1000)
        {
            //float peri = arcLength(contours[i], true);

            approxPolyDP(contours[i], conPoly[i], 5, true);
            boundRect[i] = boundingRect(conPoly[i]);

            //cout << conPoly[i].size() << endl;

            int objCor = (int)conPoly[i].size();//��ȡ�����ı���

			if (objCor == 3 && isChecked[0]) {
				objectType = "Tri";
				drawContours(img, contours, i, Scalar(255, 255, 255), 2);
				rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(255, 0, 0), 3);
				putText(img, objectType, { boundRect[i].x,boundRect[i].y + boundRect[i].height }, FONT_HERSHEY_PLAIN, 1.5, Scalar(0, 0, 0), 1.5);
			}

			else if (objCor == 4 && isChecked[2]) {
				objectType = "Rect";
				drawContours(img, contours, i, Scalar(255, 255, 255), 2);
				rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 0, 255), 3);
				putText(img, objectType, { boundRect[i].x,boundRect[i].y + boundRect[i].height }, FONT_HERSHEY_PLAIN, 1.5, Scalar(0, 0, 0), 1.5);
			}

			else if (objCor > 4 && objCor <= 8 && isChecked[3]) {

				objectType = "Poly";
				drawContours(img, contours, i, Scalar(255, 255, 255), 2);
				rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 3);
				putText(img, objectType, { boundRect[i].x,boundRect[i].y + boundRect[i].height }, FONT_HERSHEY_PLAIN, 1.5, Scalar(0, 0, 0), 1.5);
			}

			else if (objCor > 8 && isChecked[1]) {
				objectType = "Circle";
				drawContours(img, contours, i, Scalar(255, 255, 255), 2);
				rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(128, 0, 128), 3);
				putText(img, objectType, { boundRect[i].x,boundRect[i].y + boundRect[i].height }, FONT_HERSHEY_PLAIN, 1.5, Scalar(0, 0, 0), 1.5);
			}
        }
    }
    Mat fileImgCopy2 = img.clone();
    emit changeImgType(fileImgCopy2);
}

