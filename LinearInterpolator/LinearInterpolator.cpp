//
// Created by dzena on 27/12/2020.
//

#include "LinearInterpolator.h"

LinearInterpolator::LinearInterpolator(const std::vector<std::pair<double, double>> &data) : AbstractInterpolator(data) {}

double LinearInterpolator::operator()(double x) const {
    std::vector<std::pair<double, double>> data = getData();
    int i = Locate(x);
    std::pair<double, double> data1;
    std::pair<double, double> data2;
    if(i == 0) {
        data1 = data[0];
        data2 = data[1];
    }
    else if(i == data.size()) {
        data1 = data[data.size() - 2];
        data2 = data[data.size() - 1];
    }
    else {
        data1 = data[i-1];
        data2 = data[i];
    }
    return ((data2.first - x) / (data2.first - data1.first)) * data1.second + ((x - data1.first) / (data2.first - data1.first)) * data2.second;
}
