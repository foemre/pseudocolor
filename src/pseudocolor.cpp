#include <iostream>
#include <opencv2/opencv.hpp>
#include <../include/InputParser.hpp>
int main(int argc, char **argv){

    // InputParser input(argc, argv);
    // const std::string &cMapText = input.getCmdOption("-m");
    // int colorMap = std::stoi(cMapText.c_str());
    // if(!input.cmdOptionExists("-m")){
    //     std::cout << "Usage: " << std::endl << "-m NUMBER - Specify OpenCV colormap" << std::endl <<
    //         "Reference: https://docs.opencv.org/4.x/d3/d50/group__imgproc__colormap.html" << std::endl;
    // }
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