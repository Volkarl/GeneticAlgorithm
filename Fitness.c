void
calc_fitness_one_generation(const Exam_block_t *****schema_data, const int **array)    {
    int fitness = 0;
    int i, j, k, r, p;
    
for (i = 0; i < SCHEMA_SIZE; i++){
    
        while (array[i][r] < 1000){
            if (array[i][r] >= 2){
                fitness++;
            }
        r++;
       }
    for (j = 0; j < WEEK_SIZE; j++){
        for (k = 0; k < DAY_SIZE; k++){
            for (p = 0; p < ROOM_SIZE; p++){
                if (schema_data[i][j][k][p][0].classname != schema_data[i][j][k][k][0].classname && schema_data[i][j][k][k][0].year != schema_data[i][j][k][p][0].year){
                    fitness++;
                    }
                }
            }
        }
    schema_data[i][0][0][0][0].fitness = fitness;
    fitness = 0;
    }
}