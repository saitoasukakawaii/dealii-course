#include "output.h"


template<int dim>
void output_results(const DoFHandler<dim>    &dof_handler,
                    const Vector<double> &solution) const
{
  DataOut<dim> data_out;
  data_out.attach_dof_handler(dof_handler);
  data_out.add_data_vector(solution, "solution");
  data_out.build_patches();
 
  const std::string filename = "solution.vtk";
  std::ofstream     output(filename);
  data_out.write_vtk(output);
  std::cout << "Output written to " << filename << std::endl;
}