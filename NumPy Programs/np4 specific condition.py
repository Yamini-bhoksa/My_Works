# -*- coding: utf-8 -*-
"""
Created on Mon Oct 27 10:13:32 2025

@author: bhoksayamini
"""
#How to extract items that satisfy a given condition from 1D array?
import numpy as np
x=np.array([0,1,2,3,4,5,6,7,8,9])
x=x[x%2==1]
print(x)