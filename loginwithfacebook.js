const subs =require('../model/subscription');
function save_middleware(Profile){
    User=new subs({
        username:Profile.first_name+' '+Profile.last_name,
        email:Profile.email,
        id:Profile.id
    });
    User.save().then((result)=>{
        console.log(result);
    }).catch(err=>{
        console.log(err);
    })
}
module.exports=save_middleware;