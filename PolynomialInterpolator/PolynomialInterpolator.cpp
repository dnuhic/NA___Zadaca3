//
// Created by dzena on 27/12/2020.
//

#include "PolynomialInterpolator.h"

double PolynomialInterpolator::operator()(double x) const {
    return 0;
}

void PolynomialInterpolator::AddPoint(const std::pair<double, double> &p) {

}

std::vector<double> PolynomialInterpolator::GetCoefficients() const {
    return std::vector<double>();
}
