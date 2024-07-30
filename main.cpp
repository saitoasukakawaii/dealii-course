#include "mesh.h"
#include "setup_system.h"




int main()
{
    const int DIM = 2;
    Triangulation<DIM> triangulation;
    DoFHandler<DIM>    dof_handler;
    FE_Q<DIM>    fe(/* polynomial degree = */ 1);
    SparsityPattern      sparsity_pattern;
    SparseMatrix<double> system_matrix;
    Vector<double> solution;
    Vector<double> system_rhs;

    dof_handler(triangulation);
    make_grid<DIM>(triangulation);
    setup_system<DIM>(fe, dof_handler, sparsity_pattern, system_matrix, solution, system_rhs);

    assemble_system<DIM>();
    solve<DIM>();
    output_results<DIM>();

    return 0;
}