#include "Gussian.h"

using namespace std;
using namespace cv;
int main(){
	double d=NormalCurve(0,-1,1.5);
	cout << d << endl;
	CvPoint3D64f point;
	//Mat image(5, 5, CV_8UC3, 1);
	//randu(image,Scalar::all(0), Scalar::all(255));
	//cout << image << endl;
	Mat image = imread("C:\\Users\\niubaisui-pc\\Pictures\\6512695.jpg");
	image=Gussian(image, 3, 1.5);
	imshow("display window", image);
	cout << sizeof(uchar) << endl;
	cout << "ά����" << image.dims << endl;
	cout << "ͨ��:" << image.channels() << endl;
	cout << "���:" << image.depth() << endl;
	cout << "����:" << image.rows << endl;
	cout << "����:" << image.cols << endl;
	cout << "���С��" << image.step[0] << endl;
	cout << "�еĴ�С��" << image.step[1] << endl;
	cout << "Ԫ�صĴ�С��" << image.step[2] << endl;
	waitKey(0);
}