#include <deal.II/lac/vector.h>
#include <deal.II/dofs/dof_handler.h> 

#include <deal.II/numerics/data_out.h>
#include <fstream>
#include <iostream>


void output_results(const DoFHandler<dim>    &dof_handler, const Vector<double> &solution) const;