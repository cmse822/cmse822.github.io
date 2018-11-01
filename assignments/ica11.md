# In-class Assignment 11, 10/30

## HDF5

The HDF Group maintains excellent documentation and tutorial materials at https://portal.hdfgroup.org/display/support/Documentation. Refer to this material for the many, many features of HDF5! 

Refer to the simple C and Fortran codes `createH5.*` which simply initialize the HDF5 library and then open and close an HDF5 file. Compile this program using the HDF5 wrapper compilers `h5pcc` and `h5pfc`. Run the executable then inspect the output file using `h5ls` and `h5dump`. `dev-intel18` has pre-installed HDF5 libraries that have parallel and Fortran support.

## 1. Create a dataset

Add the necessary calls to create an HDF5 dataset within a "simple" HDF5 dataspace. Create a 2D dataspace with arbitrary dimensions defined within your code. Within this dataspace, create a dataset called `dset` at the root level of the HDF5 file. Without puting anything in this dataset, close the dataset, dataspace, and file, then inspect the file again with `h5ls` and `h5dump`. 

## 2. Write some actual data

Create a 2D array with the same dimensions as `dset`. Write this array to `dset` in your code. Close everything and inspect the file again.

## Parallel HDF5 

Refer to the tutorial https://portal.hdfgroup.org/display/HDF5/Introduction+to+Parallel+HDF5. 

Now, extend your simple HDF5 program to work in parallel with MPI. First create an appropriate file access property list on `MPI_COMM_WORLD` using `H5Pset_fapl_mpio`. Use this when opening the new HDF5 files so all the ranks in `WORLD` know to work together.

Create a property list to specify the dataset write approach. Use `H5FD_MPIO_COLLECTIVE` for this. Now, write your 2D dataset from above in parallel by modifying the `H5Dwrite` call as needed. Close all the various datasets, property lists, etc. Don't forget `MPI_Finalize()`!

Compile the code with `h5pcc` or `h5pfc` and run it. Run it on multiple ranks and compare the output. 