#-
Symbols c,z,e;
Indices i, r, mu, nu;
Vectors p;

Function u, uBar, v, vBar;
CFunction epsilon, epsilonStar;
CFunction denom; 

*   ___  _____ ____
*  / _ \| ____|  _ \ 
* | | | |  _| | | | |
* | |_| | |___| |_| |
*  \__\_\_____|____/ 
*

**********************
*   EXTERNAL LINES   *
**********************

* fermionIn(p, r)
*   p: Momentum of the fermion
*   r: Spin of the fermion
Function fermionIn;

* fermionOut(p, r)
*   p: Momentum of the fermion
*   r: Spin of the fermion
Function fermionOut;

* antiFermionIn(p, r)
*   p: Momentum of the anti fermion
*   r: Spin of the anti fermion
Function antiFermionIn;

* antiFermionOut(p, r)
*   p: Momentum of the anti fermion
*   r: Spin of the anti fermion
Function antiFermionOut;

* photonIn(p, r)
*   p: Momentum of the photon
*   r: Polarization of the photon
*   mu: Lorentz index of the photon
Function photonIn;

* photonOut(p, r)
*   p: Momentum of the photon
*   r: Polarization of the photon
Function photonOut;

*******************
*   PROPAGATORS   *
*******************

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

**************
*   VERTEX   *
**************

* QEDVertex(Index i, Symbol c, Index mu)
*   i: Index for the gamma trace (as in g_(i, ...))
*   c: Charge of the fermion
*   mu: Lorentz-index of the vertex
Function QEDVertex;

* vim:ft=form
#+
