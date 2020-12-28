//
// Created by dzena on 27/12/2020.
//

#ifndef NA___ZADACA3_LINEARINTERPOLATOR_H
#define NA___ZADACA3_LINEARINTERPOLATOR_H

#include "../AbstractInterpolator/AbstractInterpolator.h"

class LinearInterpolator : public AbstractInterpolator  {
public:
    LinearInterpolator(const std::vector<std::pair<double, double>> &data);

    double operator()(double x) const override;
};


#endif //NA___ZADACA3_LINEARINTERPOLATOR_H
