# This is a pytest script to test the YAML file submission for assignment 5.
# It ensures that the file is valid, properly formatted, and meets the requirements.

import pytest
import numpy as np

Xref = [0.0134565125304184,  0.9632752999558336, -0.9767318124862394]
Yref = [0.0124266991721519, -0.2492319482955459,  0.2368052491233921]

def test_data():
    """
    Test the output text file "data.txt" and make sure it agrees with
    the reference solution.
    """
    data = np.genfromtxt('data.txt').reshape([-1,3,3])

    X = data[-1,:,0]
    Y = data[-1,:,1]

    assert X == pytest.approx(Xref, rel=1e-3, abs=1e-3)
    assert Y == pytest.approx(Yref, rel=1e-3, abs=1e-3)
