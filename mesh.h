#pragma once
#include <deal.II/grid/tria.h>		// Triangulation<dim> triangulation;
#include <deal.II/grid/grid_generator.h>	// deal.ii build-in function to generate mesh
#include <deal.II/grid/grid_in.h>		// read mesh from outside


// #include <deal.II/base/parameter_handler.h>	// deal.ii parameter_handler


// #include <deal.II/grid/grid_refinement.h> not need now, used for refine mesh

// deal.ii use prm to deal with configuration infomation
template<int dim>
void make_grid(Triangulation<dim>& triangulation) // reference of triangulation
{

		GridGenerator::hyper_cube(triangulation, -1, 1);
		triangulation.refine_global(5);
	
	
	
	return;
}


template<int dim>
bool make_grid(Triangulation<dim>& triangulation)
{
	bool flags;
	
	
	
	
	// if generate mesh failed, return flags=false, and then exit. 
	return flags;
}
