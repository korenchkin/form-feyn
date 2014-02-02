#procedure feyn

*   ___  _____ ____
*  / _ \| ____|  _ \ 
* | | | |  _| | | | |
* | |_| | |___| |_| |
*  \__\_\_____|____/ 
*

**********************
*   EXTERNAL LINES   *
**********************

Identify leptonIn(p?, r?) = u(p,r);
Identify leptonOut(p?, r?) = uBar(p,r);

Identify antiLeptonIn(p?, r?) = vBar(p,r);
Identify antiLeptonOut(p?, r?) = v(p,r);

Identify photonIn(p?, r?, dimu?) = epsilon(p,r,dimu);
Identify photonOut(p?, r?, dimu?) = epsilonStar(p,r,dimu);

*******************
*   PROPAGATORS   *
*******************

Identify fermionPropagator(dii?,p?,m?) = i_*(g_(dii,p)+m*gi_(dii))*denom(p.p-m^2);
Identify photonPropagator(p?,z?,dimu?,dinu?) = -i_*(d_(dimu,dinu)*denom(p.p)-(1-z)*p(dimu)*p(dinu)*denom((p.p)^2));

**************
*   VERTEX   *
**************

Identify fermionPhotonVertex(dii?,c?,dimu?) = -i_*e*c*g_(dii,dimu);


*   ___   ____ ____
*  / _ \ / ___|  _ \
* | | | | |   | | | |
* | |_| | |___| |_| |
*  \__\_\\____|____/
*

*******************
*   PROPAGATORS   *
*******************

Identify gluonPropagator(k?,diA?,dimu?,diB?,dinu?,z?) = i_*d_(diA,diB)*denom(k.k)*(-d_(dimu,dinu)+(1-z)*k(dimu)*k(dinu)*denom(k.k));

Identify ghostPropagator(k?,diA?,diB?) = i_*d_(diA,diB)*denom(k.k);


****************
*   VERTICES   *
****************

Identify quarkGluonVertex(c?,diA?,dia?,dib?,dii?,dimu?) = i_*c*T(diA,dia,dib)*g_(dii,dimu);
Identify tripleGluonVertex(c?, p?,diA?,dimu?, k?,diB?,dinu?, q?,diC?,dirho?)
	= c*f(diA,diB,diC)*((k(dirho)-p(dirho))*d_(dimu,dinu) + (p(dimu)-q(dimu))*d_(dinu,dirho) + (q(dinu)-k(dinu))*d_(dirho,dimu));
Identify quadrupleGluonVertex(c?, diA?,dimu?, diB?,dinu?, diC?,dirho?, diD?,disigma?)
	= -i_*c^2*(
	  f(diA,diB,diE)*f(diC,diB,diE)*(d_(dimu,dirho)*d_(dinu,disigma)-d_(dimu,disigma)*d_(dinu,dirho))
	+ f(diA,diC,diE)*f(diB,diD,diE)*(d_(dimu,dinu)*d_(dirho,disigma)-d_(dimu,disigma)*d_(dinu,dirho))
	+ f(diA,diD,diE)*f(diB,diC,diE)*(d_(dimu,dinu)*d_(dirho,disigma)-d_(dimu,dirho)*d_(dinu,disigma))
	);
Identify gluonGhostVertex(c?, diA?, p?, diB?, diC?, dimu?) = c*f(diA,diB,diC)*p(dimu);


#endprocedure

* vim:ft=form
