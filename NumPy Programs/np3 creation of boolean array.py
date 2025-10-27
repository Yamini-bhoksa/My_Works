# -*- coding: utf-8 -*-
"""
Created on Mon Oct 27 10:06:13 2025

@author: bhoksayamini
"""
#Creation of boolean array
import numpy as np
x=np.full((3,3),True,dtype=bool)
print(x)
y=np.ones((3,3),dtype=bool)
print(y)
z=np.full((9),True,dtype=bool).reshape(3,3)
print(z)
