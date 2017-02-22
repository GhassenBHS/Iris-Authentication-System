
#include "opencv2/opencv.hpp"
#include "opencv2/face.hpp"
#include <fstream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include "IrisSegmentation.h"



using namespace std;
using namespace cv;
using namespace cv::face;





int main(int argc, const char** argv)
{
	iris_processing("data/S1001L01.jpg");
	// Read in the file with the images and labels
	// File should be in format name<space>label<enter>
/*	ifstream training("data/iris_unwrapped/iris_wrapped.txt");
	ifstream testing("data/iris_unwrapped/iris_wrapped_test.txt");
	
	

	// Read all the training data

	string current_line;
	vector<Mat> train_iris;
	vector<int> train_labels;
	while (getline(training, current_line)) {
		vector<string> line_elements;
		stringstream temp_stream(current_line);
		string single_item;
		while (getline(temp_stream, single_item, ' ')) {
			line_elements.push_back(single_item);
		}
		// Process the data recovered
		Mat iris = imread(line_elements[0], CV_LOAD_IMAGE_GRAYSCALE);
		int label = atoi(line_elements[1].c_str());
		train_iris.push_back(iris);
		train_labels.push_back(label);
	}

	// Read all the testing data
	current_line;
	vector<Mat> test_iris;
	vector<int> test_labels;
	
		while (getline(testing, current_line)) {
			vector<string> line_elements;
			stringstream temp_stream(current_line);
			string single_item;
			while (getline(temp_stream, single_item, ' ')) {
				line_elements.push_back(single_item);
			}
			// Process the data recovered
			Mat iris = imread(line_elements[0], CV_LOAD_IMAGE_GRAYSCALE);
			int label = atoi(line_elements[1].c_str());
			test_iris.push_back(iris);
			test_labels.push_back(label);
		}
	

	// Try using the facerecognizer interface for these irises
	// Choice of using LBPH --> local and good for finding texture
	Ptr<LBPHFaceRecognizer> iris_model = createLBPHFaceRecognizer();
	// Train the facerecognizer
	iris_model->train(train_iris, train_labels);

	// Loop over test images and match their labels
	int total_correct = 0, total_wrong = 0;
	for (int i = 0; i < test_iris.size(); i++) {
		int predict = iris_model->predict(test_iris[i]);
		cout << predict << endl;
		if (predict == test_labels[i]) {
			total_correct++;
		}
		else {
			total_wrong++;
		}
	}
	
	cerr << endl;
	cerr << "Total correct: " << total_correct << " / Total wrong: " << total_wrong << endl;
	cerr << endl;
	cv::namedWindow("test");
	waitKey(0);*/

	return 0;
}






