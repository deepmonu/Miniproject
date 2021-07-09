# TEST PLAN:

## Table no: High level test plan

|Test ID | Description | Exp I/P | Exp O/P |
|--------|-------------|---------|---------|
|HLT1    | Game selction(size) | S,M  | One Result |
|HLT2    | Game selction (difficulty) | E,H | One Result |


## Table no: Low level test plan

|Test ID | Description | Exp I/P | Exp O/P |
|--------|-------------|---------|---------|
|LLR1   | Size |    S |  (3 * 3) matrix board  |
|LLR2   | Size |    M |  (5 * 5) matrix board |
|LLR3   | Size |    L |  (8 * 8) matix board  |
|LLR4   | Difficulty |    E |  Updated randomly  |
|LLR5   | Difficulty |    H |  Updated randomly  |
|LLR6   | Ship_count |    Equal to 0 |  Win  |
|LLR7   | Ship_count |  Not Equal to 0 |  Loose  |
