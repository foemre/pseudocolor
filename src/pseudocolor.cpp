#include <opencv2/opencv.hpp>
int main(){
    cv::Mat image;
    cv::Mat colorImage;
    cv::namedWindow("Display window");
    cv::VideoCapture cap(0);

    if (!cap.isOpened()) std::cout << "cannot open camera";
    cap.set(cv::CAP_PROP_FRAME_WIDTH, 1280.0);
    cap.set(cv::CAP_PROP_FRAME_HEIGHT, 720.0);
    while (true) {
        cap >> image;
        cv::applyColorMap(image, colorImage, cv::COLORMAP_JET);
        imshow("Display window", colorImage);
        cv::waitKey(25);
    }
    return 0;
}