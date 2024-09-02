// **********************************************************
//      2024 : Arthur JEULIN
//      Copyright (c) Arthur JEULIN 
//      Created by Arthur JEULIN on 09/02/2024.
// **********************************************************
//
// Module : Visualize a fram
//

#include <iostream>
#include <opencv2/opencv.hpp>


int main()
{
  // Path to video
  std::string video_path = "/Users/arthur/Desktop/goliath-grouper-aggregation-2024/benchmark.mp4";

  // Create a VideoCapture object
  cv::VideoCapture cap(video_path);
  if(!cap.isOpened())
  {
    std::cerr << "Error : Impossible to open the video" << std::endl;
  }

  cv::Mat frame, resize_frame;
  int count = 0;

  // Read 10 first frame of the video

  while(count < 10)
  {
    if(!cap.read(frame))
    {
      break;
    }
    // Redimensionner la frame à 1920*1080
    cv::resize(frame, resize_frame, cv::Size(1280,720));

    std::cout << "Frame number : " << count + 1 << std::endl;
    // Print image
    cv::imshow("Frame",resize_frame);
    cv::waitKey(0); // Wait to the user to press a key
    ++count;
  }
  // Release VideoCapture
  cap.release();
  cv::destroyAllWindows();
  return 0;
}