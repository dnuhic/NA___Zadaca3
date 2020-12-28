//
// Created by dzena on 27/12/2020.
//

#ifndef NA___ZADACA3_ABSTRACTINTERPOLATOR_H
#define NA___ZADACA3_ABSTRACTINTERPOLATOR_H


#include <vector>
#include <utility>

class AbstractInterpolator {
    std::vector<std::pair<double, double>> data;
protected:
    int Locate(double x) const;
public:
    AbstractInterpolator(const std::vector<std::pair<double, double>> &data);
    virtual double operator()(double x) const = 0;

    const std::vector<std::pair<double, double>> &getData() const;
};


#endif //NA___ZADACA3_ABSTRACTINTERPOLATOR_H
