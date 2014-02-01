# Form Feyn

A form procedure to simplify dealing with feynman diagrams.

## Usage

To use this procedure you have to make sure that both files, `feyn.h` and `feyn.prc` can be found by form.
To do this you can either
* put them in your working directory
* add their location to `FORMPATH`

In your form file do `#include feyn.h` somewhere at the top.
Then you can use the functions defined in feyn.h to build your feynman diagrams.
Once you're done, do a `#call feyn`.
This replaces the functions with their corresponding values.

`feyn.h` declares some dummy indices that it uses as function arguments.
Do *NOT* use them, because they all have the standard dimension.

## Availabe Feynman rules

### QED

####External lines

##### Ingoing Lepton
    leptonIn(Vector p, Symbol r)
`p`: Momentum of the lepton  
`r`: Spin of the lepton


##### Outgoing Lepton
    leptonOut(Vector p, Symbol r)
`p`: Momentum of the lepton  
`r`: Spin of the lepton

##### Ingoing Antilepton
    antiLeptonIn(Vector p, Symbol r)
`p`: Momentum of the antilepton  
`r`: Spin of the lepton

##### Outgoing Antilepton
    antiLeptonOut(Vector p, Symbol r)
`p`: Momentum of the antilepton  
`r`: Spin of the lepton

##### Ingoing Photon
    photonIn(Vector p, Symbol r, Index mu)
`p`:  Momentum of the photon  
`r`:  Polarization of the photon  
`mu`: Lorentz index of the photon

##### Outgoing Photon
    photonOut(Vector p, Symbol r, Index mu)
`p`:  Momentum of the photon  
`r`:  Polarization of the photon  
`mu`: Lorentz index of the photon


#### Propagators

##### Fermion Propagator
    fermionPropagator(Index i, Vector p, Symbol m)
`i`: Index for the gamma trace (as in `g_(i, ...)`)  
`p`: Momentum of the fermion  
`m`: Mass of the fermion

##### Photon Propagator
    photonPropagator(Vector p, Symbol z, Index mu, Index nu)
`p`:      Momentum of the photon
`z`:      Gauge zeta
`mu`, `nu`: Lorentz-indices at each vertex


#### Vertex

##### Fermion - Photon Vertex
    fermionPhotonVertex(Index i, Symbol c, Index mu)
`i`:  Index for the gamma trace (as in `g_(i, ...)`)  
`c`:  Charge of the fermion  
`mu`: Lorentz-index of the vertex




### QCD

#### Propagators

#####  Gluon Propagator
    gluonPropagator(Vector k, Index mu, Index nu, Symbol z)
`k`: Momentum of the gluon  
`mu`,`nu`: Lorentz indices of the gluon at each vertex  
`z`: Gauge fixing

##### Ghost Propagator
    ghostPropagator(Vector k)
`k`: Momentum of the ghost


#### Vertices

##### Quark-Gluon Vertex
    quarkGluonVertex(Symbol g, Index A, Index a, Index b, Index i, Index mu)
`g`:   Coupling constant  
`A`:   Color index of the gluon  
`a`,`b`: Color indices of the quarks  
`i`:   Index for the gamma trace (as in `g_(i, ...)`)  
`mu`:  Lorentz index of the gluon

##### Triple Gluon Vertex
    tripleGluonVertex(Symbol g, Vector p, Index A, Index mu, Vector k, Index B, Index nu, Vector q, Index C, Index rho)
`g`:         Coupling constant  
`p`,`k`,`q`:     Momenta of the gluons  
`A`,`B`,`C`:     Color of the gluons  
`mu`,`nu`,`rho`: Lorentz indices of the gluons  

##### Quadruple Gluon Vertex
    quadrupleGluonVertex(Symbol g, Index A, Index mu, Index B, Index nu, Index C, Index rho, Index D, Index signa)
`g`:               Coupling constant  
`A`,`B`,`C`,`D`:         Color of the gluons  
`mu`,`nu`,`rho`,`sigma`: Lorentz indices of the gluons  

##### Gluon-Ghost Vertex
    gluonGhostVertex(Symbol g, Index A, Vector p, Index B, Index C, Index mu)
`g`:  Coupling constant  
`A`:  Color of the outgoing ghost  
`p`:  Momentum of the outgoing ghost  
`B`:  Color of the ingoing ghost  
`C`:  Color of the gluon  
`mu`: Lorentz index of the gluon
