#include <iostream>
#include <Eigen/Dense>
#include <math.h>

using namespace Eigen;
using namespace std;

MatrixXd CrossMatrix(VectorXd u) {

	MatrixXd Ux(3, 3); Ux << 0, -(u(3)), u(2), u(3), 0, -u(1), -u(2), u(1), 0;
	return Ux;
}

MatrixXd EulerAxis_Angle(VectorXd axis, double angle) {

	// Rodrigues Formula
	


}