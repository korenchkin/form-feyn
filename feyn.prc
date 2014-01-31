#procedure feyn

*QED

* External lines
Identify fermionIn(p?, r?) = u(p,r);
Identify fermionOut(p?, r?) = uBar(p,r);

Identify antiFermionIn(p?, r?) = vBar(p,r);
Identify antiFermionOut(p?, r?) = v(p,r);

Identify photonIn(p?, r?, mu?) = epsilon(p,r,mu);
Identify photonOut(p?, r?, mu?) = epsilonStar(p,r,mu);

* Propagators
Identify fermionPropagator(i?,p?,m?) = i_*(g_(i,p)+m*gi_(i)) / denom(p.p-m^2);
Identify photonPropagator(p?,z?,mu?,nu?) = -i_*(d_(mu,nu)/denom(k.k)-(1-z)*p(mu)*p(nu)/(p.p)^2);

* Vertex
Identify QEDVertex(i?,c?,mu?) = -i_*e*c*g_(i,mu);


* QCD

* Vetices
Identify bosonFermionVertex(c?,A?,a?,b?,i?,mu?) = i_*c*T(A,a,b)*g_(i,mu);
Identify bosonTripleVertex(c?, p?,A?,mu?, k?,B?,nu?, q?,C?,rho?)
	= c*f(A,B,C)*((k(rho)-p(rho))*d_(mu,nu) + (p(mu)-q(mu))*d_(nu,rho) + (q(nu)-k(nu))*d_(rho,mu));
Identify bosonQuadrupleVertex(c?, A?,mu?, B?,nu?, C?,rho?, D?,sigma?)
	= -i_*c^2*(
	  f(A,B,E)*f(C,B,E)*(d_(mu,rho)*d_(nu,sigma)-d_(mu,sigma)*d_(nu,rho))
	+ f(A,C,E)*f(B,D,E)*(d_(mu,nu)*d_(rho,sigma)-d_(mu,sigma)*d_(nu,rho))
	+ f(A,D,E)*f(B,C,E)*(d_(mu,nu)*d_(rho,sigma)-d_(mu,rho)*d_(nu,sigma))
	);


#endprocedure

* vim:ft=form
