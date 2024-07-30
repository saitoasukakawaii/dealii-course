#include <iostream>
#include <deal.II/lac/solver_cg.h>
#include <deal.II/lac/precondition.h>
#include <deal.II/lac/sparse_matrix.h>    
#include <deal.II/lac/vector.h>     


void solve(SparseMatrix<double> &system_matrix,
           Vector<double> &solution,
           Vector<double> &system_rhs);
 