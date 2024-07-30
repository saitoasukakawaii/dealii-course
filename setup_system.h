
#pragma once


#include <deal.II/dofs/dof_handler.h>       // DoFHandler<dim>    dof_handler
#include <deal.II/dofs/dof_tools.h>         //  DoFTools::make_sparsity_pattern(dof_handler, dsp);
#include <deal.II/fe/fe_q.h>                // FE_Q<dim>    fe

#include <deal.II/lac/dynamic_sparsity_pattern.h> // sparsity_pattern and DynamicSparsityPattern

#include <deal.II/lac/sparse_matrix.h>      // SparseMatrix<double> system_matrix
#include <deal.II/lac/vector.h>             // Vector<double> *****


template<int dim>
void setup_system(FE_Q<dim>    fe,
                    DoFHandler<dim>    &dof_handler,
                    SparsityPattern      &sparsity_pattern,
                    SparseMatrix<double> &system_matrix,
                    Vector<double> &solution,
                    Vector<double> &system_rhs)
{
  dof_handler.distribute_dofs(fe);
  std::cout << "Number of degrees of freedom: " << dof_handler.n_dofs()
            << std::endl;
 
  DynamicSparsityPattern dsp(dof_handler.n_dofs());
  DoFTools::make_sparsity_pattern(dof_handler, dsp);
  sparsity_pattern.copy_from(dsp);
 
  system_matrix.reinit(sparsity_pattern);
 
  solution.reinit(dof_handler.n_dofs());
  system_rhs.reinit(dof_handler.n_dofs());
}
 