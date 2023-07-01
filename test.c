/* #include <iostream>

#include <opencv2/opencv.hpp>

#include<easyx.h>

#include<mmsystem.h>

#pragma comment(lib,"winmm.lib")

using namespace std;

using namespace cv;

int main()

{

	VideoCapture video("./aikun.mp4");

	mciSendString("open aikun.mp3", 0, 0, 0);

	Mat image;

	Mat show;

	string txt;

	initgraph(video.get(CAP_PROP_FRAME_WIDTH) * 2, video.get(CAP_PROP_FRAME_HEIGHT) * 2);

	BeginBatchDraw();

	while (1)

	{

		video >> image;

		if (image.empty())

		{

			break;

		}

		imshow("badapple", image);

		resize(image, show, Size(),0.125*1,0.125*1);

		cvtColor(show, show, COLOR_RGB2GRAY);

		for (int i=0;i<show.rows;i++)

		{

			for (int j = 0; j < show.cols; j++)

			{

				if (show.at<uchar>(i,j)<= 128)

				{

					txt +="11";

				}

				else

				{

					txt += "00";

				}

			}



			outtextxy(0, i*16, txt.c_str());

			txt.clear();

		}

		FlushBatchDraw();

		waitKey(1000 / video.get(CAP_PROP_FPS));

		cleardevice();

		mciSendString("play aikun.mp3", 0, 0, 0);

	}

	EndBatchDraw();

	closegraph();

	return 0;

} */

#include <stdio.h>

int main()
{
	int a, b, c, x;
	a = b = c = x = 1;
	int n;

	for (a = 1; a < 100; a++)
	{
		for (b = 1; b < 100; b++)
		{
			for (c = 1; c < 100; c++)
			{
				for (x = 1; x < 100; x++)
				{
					if ((a != b) && (a != c) && (a != x)&&(b != c) && (b != x)&& (c != x))
					{
						n = (a * (x * x)) + (b * x) + c;
						if (n == 0)
						{
							printf("%d*%d^2+%d*%d+%d=0",a,x,b,x,c);
						}
					}
				}
			}
		}
	}
	printf("%d*%d^2+%d*%d+%d=0",a,x,b,x,c);
	return 0;
}