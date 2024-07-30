#pragma once

#include <deal.II/base/quadrature_lib.h>
#include <deal.II/base/types.h>
#include <deal.II/base/function.h>
#include <deal.II/fe/fe_values.h>
 
#include <deal.II/lac/vector.h>
#include <deal.II/lac/full_matrix.h>


#include <map>

#include <deal.II/numerics/vector_tools.h>
#include <deal.II/numerics/matrix_tools.h>


#include <deal.II/dofs/dof_handler.h> 
#include <deal.II/fe/fe_q.h>

// in the head file, only declare of function, macro, include file, alias
void assemble_system(FE_Q<dim>    fe,
                     DoFHandler<dim>    &dof_handler,
                     SparseMatrix<double> &system_matrix,
                     Vector<double> &solution,
                     Vector<double> &system_rhs);