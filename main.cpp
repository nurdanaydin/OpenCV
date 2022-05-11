#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int a = 0;

void change(int, void*)
{
	cout << a << endl;
	a++;
}

int main()
{	
	//Scalar 0 is black, 255 is white. With 1 channel its only between black and white.
	//Mat image(500, 1000, CV_8UC3, Scalar(117,25,96));
	//line(image, Point(92, 100), Point(410, 400),Scalar(255), 6);
	//circle(image, Point(100,100), 100, Scalar(20,150,90), 6);
	//Rect rctngl(50, 100, 100, 300);
	//rectangle(image, rctngl, Scalar(0, 226, 20), 5);
	//putText(image, "Hello World", Point(100,150), FONT_HERSHEY_SCRIPT_SIMPLEX, 5, Scalar(0,0,255),8);

	//namedWindow("HELLO", WINDOW_AUTOSIZE);
	//
	//randu(image, Scalar(0, 0, 0), Scalar(255, 255, 255));
	//imshow("HELLO", image);
	//waitKey(0);

	//resize(image, image, Size(200, 700));
	//imshow("HELLO AGAIN", image);
	
	//auto image = imread("eye.jpg");
	//if (image.empty()) return 1;
	//resize(image, image, Size(700, 500));
	//vector<int> quality;
	//quality.push_back(IMWRITE_JPEG_QUALITY);
	//quality.push_back(50);
	//imshow("Picture", image);
	//imwrite("eye.png", image);
	
	//Mat image = imread("eye.jpg");
	//Mat image2;
	//Mat image3;
	//imshow("before",image);
	//cvtColor(image, image2, COLOR_BGR2GRAY);
	//imshow("after",image2);
	//threshold(image2, image3,150, 255, THRESH_BINARY);
	//erode(image3, image3, getStructuringElement(MORPH_RECT, Size(8, 8)));
	//dilate(image3, image3, getStructuringElement(MORPH_RECT, Size(8, 8)));
	//imshow("third", image3);

	//namedWindow("Track", WINDOW_AUTOSIZE);
	//createTrackbar("TRACKBAR", "Track", &a, 1000, change);
	//waitKey(0);

	//namedWindow("IMAGE", WINDOW_AUTOSIZE);
	//Mat image;
	//image = imread("eye.jpg");
	//blur(image, image, Size(50, 50));
	//imshow("IMAGE", image);
	//waitKey(0);

	//cout << "The values of the image array: " <<image <<endl;
	//cout << "Row count: " << image.rows << endl;
	//cout << "Column count: " << image.cols << endl;

	return 0;
}

//---------------------------------------------------------------------------------

//#include<opencv2/opencv.hpp>
//#include<iostream>
//
//using namespace cv;
//using namespace std;
//
//int mavi = 0, yesil = 0, kirmizi= 0;
//
//Mat x(200, 400, CV_8UC3, Scalar(mavi, yesil, kirmizi));
//
//void renkAta(int, void*)
//{
//	x.setTo(Scalar(mavi, yesil, kirmizi));
//	imshow("TRACKBARS", x);
//}
//
//int main()
//{
//	namedWindow("TRACKBARS", WINDOW_AUTOSIZE);
//	createTrackbar("MAVÝ", "TRACKBARS", &mavi, 255, renkAta);
//	createTrackbar("YEÞÝL", "TRACKBARS", &yesil, 255, renkAta);
//	createTrackbar("KIRMIZI", "TRACKBARS", &kirmizi, 255, renkAta);
//
//	waitKey(0);
//}

//--------------------------------------------------------------------------------------

//#include<opencv2/opencv.hpp>
//#include<iostream>
//
//using namespace cv;
//using namespace std;
//
//int main()
//{
//
//	RNG *sayi = new RNG();
//
//	while (true)
//	{
//		int random = sayi->uniform(0, 151);
//		cout << random << endl;
//		waitKey(1000);
//
//	}
//
//	waitKey(0);
//}
//
//Point2f points[] = { Point2f(60,230), Point2f(320,230), Point2f(400,264), Point2f(11,264) };
//Point2f conversion[] = { Point2f(0,0), Point2f(700,0), Point2f(700,500), Point2f(0,500) };
//
//int main()
//{
//	Mat image = imread("serit.jpg");
//	Mat perspective = getPerspectiveTransform(points, conversion);
//	Mat final(500, 700, CV_8UC3);
//	warpPerspective(image, final, perspective, final.size());
//	imshow("PERPESTIVE", final);
//	imshow("ORIGINAL", image);
//
//	waitKey(0);
//}

//-------------------------------------------------------------------------------------------------------------

//#include "opencv2/imgproc.hpp"
//#include "opencv2/imgcodecs.hpp"
//#include "opencv2/highgui.hpp"
//#include <iostream>
//using namespace std;
//using namespace cv;
//static void help(char** argv)
//{
//    // print a welcome message, and the OpenCV version
//    cout << "\nThis is a demo program shows how perspective transformation applied on an image, \n"
//        "Using OpenCV version " << CV_VERSION << endl;
//    cout << "\nUsage:\n" << argv[0] << " [image_name -- Default right.jpg]\n" << endl;
//    cout << "\nHot keys: \n"
//        "\tESC, q - quit the program\n"
//        "\tr - change order of points to rotate transformation\n"
//        "\tc - delete selected points\n"
//        "\ti - change order of points to inverse transformation \n"
//        "\nUse your mouse to select a point and move it to see transformation changes" << endl;
//}
//static void onMouse(int event, int x, int y, int, void*);
//Mat warping (Mat image, Size warped_image_size, vector< Point2f> srcPoints, vector< Point2f> dstPoints);
//String windowTitle = "Perspective Transformation Demo";
//String labels[4] = { "TL","TR","BR","BL" };
//vector< Point2f> roi_corners;
//vector< Point2f> midpoints(4);
//vector< Point2f> dst_corners(4);
//int roiIndex = 0;
//bool dragging;
//int selected_corner_index = 0;
//bool validation_needed = true;
//int main(int argc, char** argv)
//{
//    help(argv);
//    CommandLineParser parser(argc, argv, "{@input| right.jpg |}");
//    Mat original_image = imread("serit.jpg");
//    Mat image;
//    float original_image_cols = (float)original_image.cols;
//    float original_image_rows = (float)original_image.rows;
//    roi_corners.push_back(Point2f((float)(original_image_cols / 1.70), (float)(original_image_rows / 4.20)));
//    roi_corners.push_back(Point2f((float)(original_image.cols / 1.15), (float)(original_image.rows / 3.32)));
//    roi_corners.push_back(Point2f((float)(original_image.cols / 1.33), (float)(original_image.rows / 1.10)));
//    roi_corners.push_back(Point2f((float)(original_image.cols / 1.93), (float)(original_image.rows / 1.36)));
//    namedWindow(windowTitle, WINDOW_NORMAL);
//    namedWindow("Warped Image", WINDOW_AUTOSIZE);
//    moveWindow("Warped Image", 20, 20);
//    moveWindow(windowTitle, 330, 20);
//    setMouseCallback(windowTitle, onMouse, 0);
//    bool endProgram = false;
//    while (!endProgram)
//    {
//        if (validation_needed & (roi_corners.size() < 4))
//        {
//            validation_needed = false;
//            image = original_image.clone();
//            for (size_t i = 0; i < roi_corners.size(); ++i)
//            {
//                circle(image, roi_corners[i], 5, Scalar(0, 255, 0), 3);
//                if (i > 0)
//                {
//                    line(image, roi_corners[i - 1], roi_corners[(i)], Scalar(0, 0, 255), 2);
//                    circle(image, roi_corners[i], 5, Scalar(0, 255, 0), 3);
//                    putText(image, labels[i].c_str(), roi_corners[i], FONT_HERSHEY_SIMPLEX, 0.8, Scalar(255, 0, 0), 2);
//                }
//            }
//            imshow(windowTitle, image);
//        }
//        if (validation_needed & (roi_corners.size() == 4))
//        {
//            image = original_image.clone();
//            for (int i = 0; i < 4; ++i)
//            {
//                line(image, roi_corners[i], roi_corners[(i + 1) % 4], Scalar(0, 0, 255), 2);
//                circle(image, roi_corners[i], 5, Scalar(0, 255, 0), 3);
//                putText(image, labels[i].c_str(), roi_corners[i], FONT_HERSHEY_SIMPLEX, 0.8, Scalar(255, 0, 0), 2);
//            }
//            imshow(windowTitle, image);
//            midpoints[0] = (roi_corners[0] + roi_corners[1]) / 2;
//            midpoints[1] = (roi_corners[1] + roi_corners[2]) / 2;
//            midpoints[2] = (roi_corners[2] + roi_corners[3]) / 2;
//            midpoints[3] = (roi_corners[3] + roi_corners[0]) / 2;
//            dst_corners[0].x = 0;
//            dst_corners[0].y = 0;
//            dst_corners[1].x = (float)norm(midpoints[1] - midpoints[3]);
//            dst_corners[1].y = 0;
//            dst_corners[2].x = dst_corners[1].x;
//            dst_corners[2].y = (float)norm(midpoints[0] - midpoints[2]);
//            dst_corners[3].x = 0;
//            dst_corners[3].y = dst_corners[2].y;
//            Size warped_image_size = Size(cvRound(dst_corners[2].x), cvRound(dst_corners[2].y));
//            Mat M = getPerspectiveTransform(roi_corners, dst_corners);
//            Mat warped_image;
//            warpPerspective(original_image, warped_image, M, warped_image_size); // do perspective transformation
//            imshow("Warped Image", warped_image);
//        }
//        char c = (char)waitKey(10);
//        if ((c == 'q') | (c == 'Q') | (c == 27))
//        {
//            endProgram = true;
//        }
//        if ((c == 'c') | (c == 'C'))
//        {
//            roi_corners.clear();
//        }
//        if ((c == 'r') | (c == 'R'))
//        {
//            roi_corners.push_back(roi_corners[0]);
//            roi_corners.erase(roi_corners.begin());
//        }
//        if ((c == 'i') | (c == 'I'))
//        {
//            swap(roi_corners[0], roi_corners[1]);
//            swap(roi_corners[2], roi_corners[3]);
//        }
//    }
//    return 0;
//}
//static void onMouse(int event, int x, int y, int, void*)
//{
//    // Action when left button is pressed
//    if (roi_corners.size() == 4)
//    {
//        for (int i = 0; i < 4; ++i)
//        {
//            if ((event == EVENT_LBUTTONDOWN) & ((abs(roi_corners[i].x - x) < 10)) & (abs(roi_corners[i].y - y) < 10))
//            {
//                selected_corner_index = i;
//                dragging = true;
//            }
//        }
//    }
//    else if (event == EVENT_LBUTTONDOWN)
//    {
//        roi_corners.push_back(Point2f((float)x, (float)y));
//        validation_needed = true;
//    }
//    // Action when left button is released
//    if (event == EVENT_LBUTTONUP)
//    {
//        dragging = false;
//    }
//    // Action when left button is pressed and mouse has moved over the window
//    if ((event == EVENT_MOUSEMOVE) && dragging)
//    {
//        roi_corners[selected_corner_index].x = (float)x;
//        roi_corners[selected_corner_index].y = (float)y;
//        validation_needed = true;
//    }
//}

// -------------------------------FACE DETECTION----------------------------------------

//#include <opencv2/imgproc.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/opencv.hpp>
//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//using namespace cv;
//
//void detectFace(const string imagePath)
//{
//	CascadeClassifier face;
//	face.load("haarcascade_frontalface_default.xml");
//
//	vector<Rect> face_detection;
//
//	Mat image = imread(imagePath);
//	Mat gray;
//	resize(image, image, Size(400, 400));
//
//	cvtColor(image, gray, COLOR_BGR2GRAY);
//
//	face.detectMultiScale(gray, face_detection);
//
//	for (int i = 0; i < face_detection.size(); i++)
//	{
//		rectangle(image, face_detection[i], Scalar(200, 0, 200), 3);
//	}
//
//	int i = 0;
//
//	imshow("Face Detection", image);
//
//	if (imagePath == "örnek5.jpg")
//		waitKey(0);
//
//	else waitKey(1000);
//
//}
//
//int main()
//{
//	detectFace("lara.jpg");
//	detectFace("örnek.jpeg");
//	detectFace("örnek2.jpg");
//	detectFace("örnek3.jpg");
//	detectFace("örnek4.jpg");
//	detectFace("örnek5.jpg");
//}