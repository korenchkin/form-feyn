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

* Verices
Identify QEDVertex(i?,c?,mu?) = -i_*e*c*g_(i,mu);

#endprocedure

* vim:ft=form
