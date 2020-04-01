/* 
 * PDF Estimator:  A non-parametric probability density estimation tool based on maximum entropy
 * File:   ScoreQZ.h
 * Copyright (C) 2018
 * Jenny Farmer jfarmer6@uncc.edu
 * Donald Jacobs djacobs1@uncc.edu
 * 
 * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published 
 * by the Free Software Foundation, either version 3 of the License, or (at your option) any later version. This program is distributed in 
 * the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
 * PURPOSE.  See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with 
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SCOREQZ_HPP
#define	SCOREQZ_HPP

#include "Score.h"

using namespace std;


class ScoreQZ : public Score{
public:
    ScoreQZ(double confidenceTarget, double confidenceMin, double confidenceMax); 
    virtual ~ScoreQZ();
    virtual vector <int> getIndices (int N, int p);
    virtual vector <int> setIndices (int N, int p);
    double calculateScore(double r[], int N, int p);
    void getValues();   
private:
    vector <double> sigma;
    vector <double> mu;
    
};

#endif	/* SCORE_HPP */
