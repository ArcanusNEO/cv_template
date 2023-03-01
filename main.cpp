#include "neocc.hpp"

#include <opencv2/opencv.hpp>

#include <opencv2/cudaarithm.hpp>
#include <opencv2/cudacodec.hpp>
#include <opencv2/cudafeatures2d.hpp>
#include <opencv2/cudaimgproc.hpp>
#include <opencv2/cudawarping.hpp>

using namespace cv;
using namespace std;

signed main(int argc, char* argv[]) {
  if (argc < 2) return 1;
  // 读取源图像并转化为灰度图像
  Mat src_image = imread(argv[1]);
  // 判断文件是否读入正确
  if (!src_image.data) return 1;
  // 图像显示
  imshow("src_image", src_image);
  waitKey(0);
}
