//
// Created by dzena on 27/12/2020.
//

#include "AbstractInterpolator.h"
#include <algorithm>
#include <stdexcept>
#include <iostream>

AbstractInterpolator::AbstractInterpolator(const std::vector<std::pair<double, double>> &data) {
    AbstractInterpolator::data = data;
    std::sort(AbstractInterpolator::data.begin(), AbstractInterpolator::data.end(), [] (std::pair<double, double> p1, std::pair<double, double> p2) {
        if(p1.first == p2.first)
            throw std::domain_error("Invalid data set");
        return p1.first < p2.first;
    });
}

int AbstractInterpolator::Locate(double x) const {
    if(x <= data[0].first) return 1;
    else if(x > data[data.size() - 1].first) return data.size();
    else {
        return std::lower_bound(data.begin(), data.end(), x, [] (std::pair<double, double> p, double x) {
            return p.first < x;
        }) - data.begin();
    }
}

const std::vector<std::pair<double, double>> &AbstractInterpolator::getData() const {
    return data;
}
