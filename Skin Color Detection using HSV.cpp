cvtColor(frame, grayFrame, CV_BGR2HSV);

			frame.copyTo(preFrame);

			for (int i = 0; i < frame.rows; i++) {
				for (int j = 0; j < frame.cols; j++) {
					if (grayFrame.at<Vec3b>(i, j)[0] <= (25/2) || grayFrame.at<Vec3b>(i, j)[0] <= (360 / 2) || grayFrame.at<Vec3b>(i, j)[0] >= (335 / 2)) {
						if (((grayFrame.at<Vec3b>(i, j)[1] <= (0.6*255) &&  grayFrame.at<Vec3b>(i, j)[1] >= (0.2 * 255))) && grayFrame.at<Vec3b>(i, j)[2] >= (0.4*255)) {

						}
						else {
							frame.at<Vec3b>(i, j)[0] = 0;
							frame.at<Vec3b>(i, j)[1] = 0;
							frame.at<Vec3b>(i, j)[2] = 0;
						}
						
					}
					
				}
			}