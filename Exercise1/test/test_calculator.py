# Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration

# Local import(s).
import ROOT

# Common import(s).
import unittest


# Set up a test for the Calculator class.
class TestCalculator(unittest.TestCase):

    def test_identity(self):

        c = ROOT.Calculator(1.0, 0.0)
        self.assertEqual(c.calculate(1.0), 1.0)
        self.assertEqual(c.calculate(2.0), 2.0)


# Run the test(s).
if __name__ == "__main__":
    unittest.main()
