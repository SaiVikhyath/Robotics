setChartLibrary('google-chart');
setChartTitle('Light Monitoring System');
setChartType('areaGraph');
setAxisName('Time','Light');
setCrosshair(true);
plotChart("time_stamp","light");
dataDownload(false);