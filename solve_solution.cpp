void solve(SparseMatrix<double> &system_matrix,
           Vector<double> &solution,
           Vector<double> &system_rhs)
{
  SolverControl            solver_control(1000, 1e-6 * system_rhs.l2_norm());
  SolverCG<Vector<double>> solver(solver_control);
  solver.solve(system_matrix, solution, system_rhs, PreconditionIdentity());
 
  std::cout << solver_control.last_step()
            << " CG iterations needed to obtain convergence." << std::endl;
}
 