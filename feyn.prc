#procedure feyn

*QED
Identify fermionPropagator(i?,p?,m?) = i_*(g_(i,p)+m*gi_(i)) / denom(p.p-m^2);
Identify photonPropagator(p?,z?,mu?,nu?) = -i_*(d_(mu,nu)/denom(k.k)-(1-z)*p(mu)*p(nu)/(p.p)^2);
Identify QEDVertex(i?,c?,mu?) = -i_*e*c*g_(i,mu);

#endprocedure
