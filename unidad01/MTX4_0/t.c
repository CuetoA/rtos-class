/********************************************************************
Copyright 2010-2015 K.C. Wang, <kwang@eecs.wsu.edu>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
********************************************************************/
/************* tc.c file ******************/
#define SSIZE  1024

typedef struct proc{
        struct proc *next;
               int  *ksp;
               int   kstack[SSIZE];
}PROC;

PROC proc, *running;
int procSize = sizeof(PROC);

int scheduler()
{ 
  running = &proc;
}

main()
{
  printf("\nIn mtx kernel main() 2020.09.08...\n");
  running = &proc;
  printf("call tswitch()\n");
     tswitch();
  printf("back to main()\n");
}

