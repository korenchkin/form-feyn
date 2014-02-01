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

Identify leptonIn(p?, dir?) = u(p,dir);
Identify leptonOut(p?, dir?) = uBar(p,dir);

Identify antiLeptonIn(p?, dir?) = vBar(p,dir);
Identify antiLeptonOut(p?, dir?) = v(p,dir);

Identify photonIn(p?, dir?, dimu?) = epsilon(p,dir,dimu);
Identify photonOut(p?, dir?, dimu?) = epsilonStar(p,dir,dimu);

*******************
*   PROPAGATORS   *
*******************

Identify fermionPropagator(dii?,p?,m?) = i_*(g_(dii,p)+m*gi_(dii))/(p.p-m^2);
Identify photonPropagator(p?,z?,dimu?,dinu?) = -i_*(d_(dimu,dinu)/(k.k)-(1-z)*p(dimu)*p(dinu)/(p.p)^2);

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

Identify gluonPropagator(k?,diA?,dimu?,diB?,dinu?,z?) = i_*d_(diA,diB)/k.k*(-d_(dimu,dinu)+(1-z)*k(dimu)*k(dinu)/k.k);

Identify ghostPropagator(k?,diA?,diB?) = i_*d_(diA,diB)/k.k;


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
