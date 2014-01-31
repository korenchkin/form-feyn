#-
Symbols c,z,e;
Indices i, mu, nu;
Vectors p;

CFunction denom; 

*   ___  _____ ____
*  / _ \| ____|  _ \ 
* | | | |  _| | | | |
* | |_| | |___| |_| |
*  \__\_\_____|____/ 
*

Function fermionIn, fermionOut, antiFermionIn, antiFermionOut, photon;

* fermionPropagator(Index i, Vector p, Symbol m)
*   i: Index for the gamma trace (as in g_(i, ...))
*   p: Momentum of the fermion
*   m: Mass of the fermion
Function fermionPropagator;

* photonPropagator(Vector p, Symbol z, Index mu, Index nu)
*   p: Momentum of the photon
*   z: gauge zeta
*   mu, nu: Lorentz-indices of the propagator
Function photonPropagator

* QEDVertex(Index i, Symbol c, Index mu)
*   i: Index for the gamma trace (as in g_(i, ...))
*   c: Charge of the fermion
*   mu: Lorentz-index of the vertex
Function QEDVertex;

* vim:ft=form
#+
