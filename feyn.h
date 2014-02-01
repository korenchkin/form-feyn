#-
Symbols c, z, e, r;

*******************************************************************
*                                                                 *
*                           WARNING:                              *
*            Do *NOT* use the indices as defined here!            *
*      They are dummy indices used as function arguments with     *
*                       default dimension.                        *
*        Define your own indices with the correct dimensions!     *
*                                                                 *
*******************************************************************
Indices dii;
Indices dimu, dinu, dirho, disigma;
Indices dia ,dib;
Indices diA, diB, diC, diD, diE;

Vectors p, q, k;

Tensors f,T;

Function u, uBar, v, vBar;

CFunction epsilon, epsilonStar;

*   ___  _____ ____
*  / _ \| ____|  _ \ 
* | | | |  _| | | | |
* | |_| | |___| |_| |
*  \__\_\_____|____/ 
*

**********************
*   EXTERNAL LINES   *
**********************

* leptonIn(p, r)
*   p: Momentum of the lepton
*   r: Spin of the lepton
Function leptonIn;

* leptonOut(p, r)
*   p: Momentum of the lepton
*   r: Spin of the lepton
Function leptonOut;

* antiLeptonIn(p, r)
*   p: Momentum of the anti lepton
*   r: Spin of the anti lepton
Function antiLeptonIn;

* antiLeptonOut(p, r)
*   p: Momentum of the anti lepton
*   r: Spin of the anti lepton
Function antiLeptonOut;

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
*   m: Mass of the lepton
Function fermionPropagator;

* photonPropagator(Vector p, Symbol z, Index mu, Index nu)
*   p:      Momentum of the photon
*   z:      Gauge zeta
*   mu, nu: Lorentz-indices of the propagator
Function photonPropagator

**************
*   VERTEX   *
**************

* fermionPhotonVertex(Index i, Symbol c, Index mu)
*   i:  Index for the gamma trace (as in g_(i, ...))
*   c:  Charge of the fermion
*   mu: Lorentz-index of the vertex
Function fermionPhotonVertex;


*   ___   ____ ____
*  / _ \ / ___|  _ \
* | | | | |   | | | |
* | |_| | |___| |_| |
*  \__\_\\____|____/
*

*******************
*   PROPAGATORS   *
*******************

* gluonPropagator(Vector k, Index mu, Index nu, Symbol z)
*   k: Momentum of the gluon
*   mu,nu: Lorentz indices of the gluon at each vertex
*   z: Gauge fixing
Function gluonPropagator;

* ghostPropagator(Vector k)
*   k: Momentum of the ghost
Function ghostPropagator;


****************
*   VERTICES   *
****************

* quarkGluonVertex(Symbol g, Index A, Index a, Index b, Index i, Index mu)
*   g:   Coupling constant
*   A:   Color index of the gluon
*   a,b: Color indices of the quarks
*   i:   Index for the gamma trace (as in g_(i, ...))
*   mu:  Lorentz index of the gluon
Function quarkGluonVertex;

* tripleGluonVertex(Symbol g, Vector p, Index A, Index mu, Vector k,
*                   Index B, Index nu, Vector q, Index C, Index rho)
*   g:         Coupling constant
*   p,k,q:     Momenta of the gluons
*   A,B,C:     Color of the gluons
*   mu,nu,rho: Lorentz indices of the gluons
Function tripleGluonVertex;

* quadrupleGluonVertex(Symbol g, Index A, Index mu, Index B, Index nu,
*                      Index C, Index rho, Index D, Index signa)
*   g:               Coupling constant
*   A,B,C,D:         Color of the gluons
*   mu,nu,rho,sigma: Lorentz indices of the gluons
Function quadrupleGluonVertex;

* gluonGhostVertex(Symbol g, Index A, Vector p, Index B, Index C, Index mu)
*   g:  Coupling constant
*   A:  Color of the outgoing ghost
*   p:  Momentum of the outgoing ghost
*   B:  Color of the ingoing ghost
*   C:  Color of the gluon
*   mu: Lorentz index of the gluon
Function gluonGhostVertex;

* vim:ft=form
#+
