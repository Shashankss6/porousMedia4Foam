// Solve the Momentum equation
laminarTransport.correct();

tmp<fvVectorMatrix> tUEqn
(
   
  - fvm::laplacian(laminarTransport.nu()/(eps+SMALL),U)
  + fvm::Sp(laminarTransport.nu()*invK,U) == fvOptions(U)
);
fvVectorMatrix& UEqn = tUEqn.ref();

UEqn.relax();
fvOptions.constrain(UEqn);

if (pimple.momentumPredictor())
{
    solve(UEqn == -fvc::grad(p));
}
