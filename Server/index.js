const express = require("express");
const mongoose = require("mongoose");

const app = express();

//database
mongoose.connect("mongodb://localhost:27017/statusDB"); //need to add database location

const statusSchema = mongoose.Schema({
    ID: String,
    relayNo: String,
    status: String,
})

const status = mongoose.model('Status', statusSchema)

//get and post requests

app.get('/', function(req, res){
    res.send("response")
})

app.post('/', function(req, res){
    content = req.body
})

app.listen(3000, function(){
    console.log("server started at port 3000");
});