//
// Created by dzena on 27/12/2020.
//

#ifndef NA___ZADACA3_POLYNOMIALINTERPOLATOR_H
#define NA___ZADACA3_POLYNOMIALINTERPOLATOR_H


#include "../AbstractInterpolator/AbstractInterpolator.h"

class PolynomialInterpolator : public AbstractInterpolator {
public:
    PolynomialInterpolator(const std::vector<std::pair<double, double>> &data) : AbstractInterpolator(data) {}

    double operator()(double x) const override;

    void AddPoint(const std::pair<double, double> &p);

    std::vector<double> GetCoefficients() const;


};


#endif //NA___ZADACA3_POLYNOMIALINTERPOLATOR_H
