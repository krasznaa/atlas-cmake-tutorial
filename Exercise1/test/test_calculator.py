# Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration

# Import(s).
import ROOT

# Test that Calculator can be instantiated / used.
c = ROOT.Calculator(1.0, 0.0)
foo = c.calculate(1.0)
