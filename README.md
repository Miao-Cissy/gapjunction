# gapjunction

Code for simulation of Rz cell gapjunction of leech.

### Parameters from real recordings:
Given Retzius cells A and B connected by a gapjunction:

R<sub>A</sub> = 23 MΩ,
C<sub>A</sub> = 1000 pF,
τ<sub>A</sub> = 24 ms

R<sub>B</sub> = 34 MΩ,
C<sub>B</sub> = 500 pF,
τ<sub>B</sub> = 19 ms


### To do
0. Calculate coupling coefficients - v2/v1 after stimulation 
1. Check surface area and check if it makes sense for all of the variables
2. Change model variables
3. Run simulation to see if it makes sense
#### Optional:
4. Remove extra channels (Potassium A,M,C,... channels) and see if it affects the simulation
5. Check propagation properties 
6. Phase changes

### Presentation-schema

1. What are we modelling? (Brief description and paper reference)
2. Problems with modelling
3. The model we ended up building
4. Experiments
5. Calculate baseline values through graphs
6.   1. Conductance
            2. Coupling coefficients
7. Adapting model to retzius leech parameters
8.   1. Using Jonathan's values for both neurons
9. Checking phase changes
10.   1. Change gap junction conducances
             2. Optional: Input sin waves
11. Freestyling with the model
