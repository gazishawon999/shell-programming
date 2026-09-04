/*First Come First Serve algorithm.
Take input from user(Burst time and process id).
Processes will be sorted according to the process id.
Calculate waiting time for each process and average waiting time.
Calculate turnaround time for each process and average turnaround time.
make a table with all the values.
make a gantt chart*/

#include <stdio.h>

int main()
{
    int n, i, j, temp;
    int p[100], bt[100], wt[100], tat[100];
    float avgWT = 0, avgTAT = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    // Take Input for Process and Brust time
    for (i = 0; i < n; i++)
    {
        printf("\nProcess %d\n", i + 1);

        printf("Enter Your Process ID: ");
        scanf("%d", &p[i]);

        printf("Enter Your Burst Time: ");
        scanf("%d", &bt[i]);
    }

    // Sort Process Id
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (p[i] > p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;

                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }
        }
    }
    // Waiting Time
    wt[0] = 0;
    for (i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
    }
    // Turnaround Time

    for (i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];

        avgWT = avgWT + wt[i];
        avgTAT = avgTAT + tat[i];
    }
    avgWT = avgWT / n;
    avgTAT = avgTAT / n;

    // Table
printf("\n================ FCFS Result Table
================\n");
printf("%-15s %-15s %-15s %-15s\n",
"Process", "Burst", "Waiting", "Turnaround");

printf("-----------------------------------------------------
-\n");

for(i = 0; i < n; i++){
        printf("P%-10d %-10d %-10d %-10d\n",
               p[i], bt[i], wt[i], tat[i]);
}
printf("----Average Waiting Time & Average Turnaround Time---
-\n");

printf("Average Waiting Time : %.2f\n", avgWT);
printf("Average Turnaround Time : %.2f\n", avgTAT);

// Gantt Chart
printf("\nGantt Chart\n\n");

for(i = 0; i < n; i++) //for upper border print
printf("+-------");
printf("+\n");

for(i = 0; i < n; i++)
printf("| P%-5d ", p[i]);
printf("|\n");

for(i = 0; i < n; i++) //for lower border print
printf("+-------");
printf("+\n");

int time = 0;

printf("%d", time);

for(i = 0; i < n; i++){
        time = time + bt[i];
        printf("%9d", time);
}

printf("\n");

return 0;
}