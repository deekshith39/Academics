package TempMax;

import org.apache.hadoop.io.*;
import org.apache.hadoop.mapreduce.*;
import java.io.IOException;

public class MaxReducer extends Reducer <Text, IntWritable,Text, IntWritable >
 {
public void reduce(Text key, Iterable<IntWritable> values, Context context) throws IOException,
InterruptedException
 {
 int max_temp = 0;

 for (IntWritable value : values)
 {
	 if(value.get() > max_temp) 
		 max_temp = value.get();
 }
 context.write(key, new IntWritable(max_temp));
 }
}