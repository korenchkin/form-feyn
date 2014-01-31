#-
Symbols c, z, e;
Indices i, r;
Indices mu, nu, rho, sigma;
Indices a, b;
Indices A, B, C, D, E;
Vectors p, q, k;
Tensors f,T;

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
*   p:  Momentum of the photon
*   r:  Polarization of the photon
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
*   p:      Momentum of the photon
*   z:      Gauge zeta
*   mu, nu: Lorentz-indices of the propagator
Function photonPropagator

**************
*   VERTEX   *
**************

* QEDVertex(Index i, Symbol c, Index mu)
*   i:  Index for the gamma trace (as in g_(i, ...))
*   c:  Charge of the fermion
*   mu: Lorentz-index of the vertex
Function QEDVertex;


*   ___   ____ ____
*  / _ \ / ___|  _ \
* | | | | |   | | | |
* | |_| | |___| |_| |
*  \__\_\\____|____/
*


****************
*   VERTICES   *
****************

* bosonFermionVertex(Symbol g, Index A, Index a, Index b, Index i, Index mu)
*   g:   Coupling constant
*   A:   Color index of the gauge boson
*   a,b: Color indices of the fermions
*   i:   Index for the gamma trace (as in g_(i, ...))
*   mu:  Lorentz index of the gauge boson
Function bosonFermionVertex;

* bosonTripleVertex(Symbol g, Vector p, Index A, Index mu, Vector k,
*                   Index B, Index nu, Vector q, Index C, Index rho)
*   g:         Coupling constant
*   p,k,q:     Momenta of the gauge bosons
*   A,B,C:     Color of the gauge bosons
*   mu,nu,rho: Lorentz indices of the gauge bosons
Function bosonTripleVertex;

* bosonQuadrupleVertex(Symbol g, Index A, Index mu, Index B, Index nu,
*                      Index C, Index rho, Index D, Index signa)
*   g:               Coupling constant
*   A,B,C,D:         Color of the gauge bosons
*   mu,nu,rho,sigma: Lorentz indices of the gauge bosons
Function bosonQuadrupleVertex;

* bosonGhostVertex(Symbol g, Index A, Vector p, Index B, Index C, Index mu)
*   g:  Coupling constant
*   A:  Color of the outgoing ghost
*   p:  Momentum of the outgoing ghost
*   B:  Color of the ingoing ghost
*   C:  Color of the gauge boson
*   mu: Lorentz index of the gauge boson
Function bosonGhostVertex;

* vim:ft=form
#+
