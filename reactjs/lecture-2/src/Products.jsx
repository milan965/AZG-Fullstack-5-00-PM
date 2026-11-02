import React from 'react'

const Products = () => {
    

    const images = [
            "https://rukminim2.flixcart.com/fk-p-flap/1600/780/image/40815025218ca818.png?q=80",
            "https://rukminim2.flixcart.com/fk-p-flap/1600/780/image/d19bbb910faca076.png?q=80",
            "https://rukminim2.flixcart.com/fk-p-flap/1600/780/image/5c7fb522f2397505.png?q=80",
            "https://rukminim2.flixcart.com/fk-p-flap/1600/780/image/a28c7314f730668c.png?q=80"
        ]

  return (
    <div style={{display:'flex',flexWrap:'wrap',width:'90%',margin:'0 auto',gap:'20px'}}>
        
        {
            images.map((im)=>{
                return (
                    <img width="30%" src={im}/>
                )
            })
        }


    </div>
  )
}

export default Products
